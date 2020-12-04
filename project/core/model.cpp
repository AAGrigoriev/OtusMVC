#include "model.hpp"
#include "algorithm"

void Model::new_doc()
{
    shapes.clear();
    /* notify view */
}

void Model::save_document()
{
    /* save to file (Serialize)*/
}

void Model::open(std::string &FilePath)
{
    shapes.clear();

    filePath = filePath;
    /* notify view */
}

void Model::addPrimitive(std::unique_ptr<IShape> shape)
{
    shapes.push_back(shape);
    /* notify view */
}

void Model::deletePrimitive(std::unique_ptr<IShape> shape)
{
    shapes.remove(shape);
    /* notify view */
}