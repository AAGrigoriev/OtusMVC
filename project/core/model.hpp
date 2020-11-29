#include <string>
#include <list>
#include <memory>
#include "IShape.hpp"

/*!
    @brief interface class vector editor model
*/
class IModel
{
public:
    /*!
        @brief Create new document
    */
    virtual void new_doc() = 0;

    /*!
        @brief Open document from file
        @param[in] file_name 
    */
    virtual void open(std::string &file_name) = 0;

    /*!
        @brief Add primitive to document
        @param[in] shape  
    */
    virtual void addPrimitive(std::unique_ptr<IShape> shape) = 0;

    /*!
        @brief Delete primitive form document
        @param[in] shape  
    */
    virtual void deletePrimitive(std::unique_ptr<IShape> shape) = 0;

    virtual ~IModel() = default;
};

class Model : public IModel
{
public:
    Model() = default;

    ~Model() = default;

    /*!
        @brief Create new document
    */
    virtual void new_doc() override;

    /*!
        @brief Open new document
        @param[in] FilePath 
    */
    virtual void open(std::string &FilePath) override;

    /*!
        @brief Add primitive to document
        @param[in] shape  
    */
    virtual void addPrimitive(std::unique_ptr<IShape> shape) override;

    /*!
        @brief Delete primitive from document
        @param[in] shape  
    */
    virtual void deletePrimitive(std::unique_ptr<IShape> shape) override;

private:
    /*!
        @brief 
    */
    std::list<std::unique_ptr<IShape>> shapes;

    /*!
        @brief 
    */
    std::string filePath;
};
