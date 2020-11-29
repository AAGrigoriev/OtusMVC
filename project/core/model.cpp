#include "model.hpp"
#include "algorithm"

void Model::new_doc()
{
    shapes.clear();
}

void Model::open(std::string& FilePath)
{
    shapes.clear();
    
    /* Some logic to Open file  and load shapes from file */

    filePath = filePath;
}

void Model::addPrimitive(std::unique_ptr<IShape> shape)
{
    shapes.push_back(shape);
}

void Model::deletePrimitive(std::unique_ptr<IShape> shape)
{
    shapes.remove(shape);
}