#pragma once
#include <vector>
#include "../Component.h"
#include <memory>
#include <type_traits>
#include "../../common/logger/Logger.h"


class ComponentManager {
public:
    ComponentManager(Logger& logger);
    void readComponents(int deltaTime_ms);
    void writeComponents(int deltaTime_ms);

    // This must be defined in the header file because the generic must be defined in a global scope
    // If this was defined in the concrete class, then the template would only be evaluated on instantiation of ComponentManager
    template <typename T>
    void registerComponent(T& component) {
        static_assert(std::is_base_of<Component, T>::value, "T must inherit from Component");

        m_components.push_back(std::make_shared<T>(component));
    };

private:
    std::vector<std::shared_ptr<Component>> m_components;
    Logger& m_logger;
};