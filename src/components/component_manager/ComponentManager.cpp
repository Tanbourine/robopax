#include "ComponentManager.h"
#include <type_traits>

#include "../Component.h"
#include <memory>
#include "../../common/logger/Logger.h"

ComponentManager::ComponentManager(Logger& logger): m_logger(logger) {};

void ComponentManager::readComponents(int deltaTime_ms) {
    for (auto component : m_components) {
        component->read(deltaTime_ms);
    }
}

void ComponentManager::writeComponents(int deltaTime_ms) {
    for (auto component : m_components) {
        component->write(deltaTime_ms);
    }
}