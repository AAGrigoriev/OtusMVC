#include "controller.hpp"
#include <assert.h>
#include "objects/dot.hpp"
#include "objects/circle.hpp"

Controller::Controller(std::shared_ptr<Model> model) 
{
    assert(model);

    this->model = model;
}


void Controller::open_document()
{
    std::string new_file;
    /* Fill string */
    model->open(new_file);
}

void Controller::add_primitive(type_shape shape)
{

}

void Controller::delete_primitive(type_shape shape)
{

}

void Controller::save_document()
{
}