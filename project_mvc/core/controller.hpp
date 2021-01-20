#pragma once

#include <memory>
#include "tools/tools.hpp"
#include "model.hpp"
#include "tools/fabrick.hpp"

/*!
    @brief interface class vector editor controller
*/
class IController
{
public:
    IController() = default;
    virtual ~IController() = default;

    virtual void open_document() = 0;

    virtual void add_primitive(std::unique_ptr<IFabrick> f) = 0;

    virtual void delete_primitive() = 0;

    virtual void save_document() = 0;
};

/*!
    @brief Controller for vector editor 
*/
class Controller : public IController
{
public:
    /*!
        @brief Constructor
        @param[in] model Pointer to Model 
    */
    Controller(std::shared_ptr<Model> model);

    /*!
        @brief Destructor
    */
    virtual ~Controller() = default;

    /*!
        @brief Create new file
    */
    virtual void open_document() override;

    /*!
        @brief Create new object
    */
    virtual void add_primitive(std::unique_ptr<IFabrick> f) override;

    /*!
        @brief Delete object 
    */
    virtual void delete_primitive() override;

    /*!
        @brief Save document to file
    */
    virtual void save_document() override;

private:
    /*!
        @brief Pointer to IModel
    */
    std::shared_ptr<IModel> model;
};