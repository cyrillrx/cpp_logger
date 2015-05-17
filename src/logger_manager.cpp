//
// Created by Cyril Leroux on 17/05/2015.
//

#include "logger_manager.h"


//void LoggerManager::AddLogger(const std::unique_ptr<Logger>& logger)
void LoggerManager::AddLogger(const Logger* logger)
{
    loggers_.push_back(logger);
}

void LoggerManager::Debug(const std::string& message) const
{
    for (const auto& logger : loggers_) {
        logger->Debug(message);
    }
}

void LoggerManager::Info(const std::string& message) const
{
    for (const auto& logger : loggers_) {
        logger->Info(message);
    }
}

void LoggerManager::Warning(const std::string& message) const
{
    for (const auto& logger : loggers_) {
        logger->Warning(message);
    }
}

void LoggerManager::Error(const std::string& message) const
{
    for (const auto& logger : loggers_) {
        logger->Error(message);
    }
}