#include  "view.hpp"
#include  "tools/tools.hpp"
#include  "assert.h"

View::View(std::shared_ptr<IController> contr, std::shared_ptr<IModel> model): contr(contr),model(model) {

    assert(model);
    assert(contr);

    simpleGraphic = std::make_shared<GraphicSimple>();
}

void View::button_open()
{
    contr->open_document();
}

void View::button_new()
{
    contr->open_document();
}

void View::button_save()
{
    contr->save_document();
}

void View::button_add_dot()
{
    contr->add_primitive(type_shape::DOT);
}

void View::button_add_circle()
{
    contr->add_primitive(type_shape::CIRCLE);
}

void View::button_delete_circle()
{
    contr->delete_primitive(type_shape::CIRCLE);
}

void View::button_delete_dot()
{
    contr->delete_primitive(type_shape::DOT);
}

void View::Update()
{
    if(auto observe = model.lock())
    {
        observe->draw(simpleGraphic);
    }
}