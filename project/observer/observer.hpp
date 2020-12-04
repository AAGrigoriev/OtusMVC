#pragma once

#include <list>
#include <memory>

/**
 * \interface IObserver
 * @brief For notifications
 */
class IObserver
{
public:
    /**
    * @brief Update derived classes
    */
    virtual void Update() = 0;

    virtual ~IObserver() = default;
};

/**
 * \interface IObservable
 * @brief For monitoring
 */
class IObservable
{
public:
    virtual void subscribe(std::shared_ptr<IObserver> obs)
    {
        m_Observers.push_back(obs);
    }

    virtual void unsubscribe(std::shared_ptr<IObserver> obs)
    {
        m_Observers.remove(obs);
    }

    virtual void notify()
    {
        for(auto& ptr : m_Observers)
        {
            ptr->Update();
        }
    }

private:
    std::list<std::shared_ptr<IObserver>> m_Observers;
};