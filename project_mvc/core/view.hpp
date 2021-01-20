#pragma once

#include "graphic/graphic.hpp"
#include "controller.hpp"
#include "model.hpp"
#include "observer/observer.hpp"

#include <memory>
class IView
{
public:
    IView() = default;

    virtual ~IView() = default;

    virtual void button_open() = 0;

    virtual void button_new() = 0;

    virtual void button_save() = 0;

    virtual void button_add_dot() = 0;

    virtual void button_add_circle() = 0;

    virtual void button_delete_dot() = 0;

    virtual void button_delete_circle() = 0;
};

class View : public IView, public IObserver
{
public:
    /*!
        @brief Constructor View
        param[in] contr Pointer to Controller
        param[in] model Pointer to Model
    */
    View(std::shared_ptr<Controller> contr, std::shared_ptr<Model> model);

    virtual ~View() = default;

    /*!
        @brief event open document
    */
    virtual void button_open() override;

    /*!
        @brief event create new document
    */
    virtual void button_new() override;

    /*!
        @brief event save documnet to file
    */
    virtual void button_save() override;

    /*!
        @brief event add new dot 
    */
    virtual void button_add_dot() override;

    /*!
        @brief event add new circle 
    */
    virtual void button_add_circle() override;

    /*!
        @brief event delete dot
    */
    virtual void button_delete_dot() override;

    /*!
        @brief event delete circle
    */
    virtual void button_delete_circle() override;
    /*!
        @brief update Observer
    */
    virtual void update() noexcept override;

private:
    /* graphic (canvas or ...) */
    std::shared_ptr<IGraphic> simpleGraphic;
    /* pointer to contr */
    std::shared_ptr<IController> contr;
    /* pointer to model */
    std::shared_ptr<IModel> model;
};