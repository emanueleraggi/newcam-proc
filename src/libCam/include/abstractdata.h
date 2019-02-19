#ifndef ABSTRACTDATA_H
#define ABSTRACTDATA_H
#include <string>
#include <iostream>
#include <QtSql/QSqlDatabase>
#include <memory>
#include <QStringList>

class AbstractData
{
public:
    AbstractData();
    /*!
     * \brief abstract memeber to read data from a file using a filename
     * \param filename the location of the file you wish to read from
     * \note unless overridden this function will just print an error to the screen
     */
    virtual void readFile(std::string filename){std::cerr << "no readFile Implemented" << std::endl;}
    /*!
     * \brief abstract memeber to write data from a file using a filename
     * \param filename the location of the file you wish to write to
     * \note unless overridden this function will just print an error to the screen
     */
    virtual void writeFile(std::string filename){std::cerr << "no writeFile Implemented" << std::endl;}
    /*!
     * \brief abstract memeber to read data from a database
     * \param table the table you want to write to
     * \note unless overridden this function will just print an error to the screen
     */
    virtual QStringList readDBTables(){std::cerr << "no readDBTables Implemented" << std::endl;}
    /*!
     * \brief abstract memeber to write data to a database
     * \param table the table you want to read from
     * \note unless overridden this function will just print an error to the screen
     */
    virtual void writeDB(std::string table){std::cerr << "no writeDB Implemented" << std::endl;}

    virtual std::string getDBTableDescription(){return "";}
    /*!
     * \brief the version number of the datatype so that you can preserve backwards
     * compatibility.
     * \return the version number as an integer
     */

    // New template data for the detector
//    virtual void writeToDBDetector(std::string table){std::cerr << "no writeDB Implemented" << std::endl;}
//    virtual void readFromDBDetector() {std::cerr << "no readDBTables Implemented" << std::endl;}
//    virtual std::string getDetectorTableDescription() {return "";}



    virtual int getVersion(){return version;}
    /*!
     * \brief a simple check to determine if the data is loaded
     * \return true if loaded otherwise false
     */
    virtual bool isLoaded(){return loaded;}

protected:
    /*!
     * \brief a brief description of what type of data this is.
     * intended for use when reading human readble file formats
     * like yaml, csv or xml.
     */
    std::string dataType;
    /*!
     * \brief the version number see AbstractData::getVersion()
     */
    int version;
    /*!
     * \brief is the thing loaded see AbstractData::isLoaded()
     */
    bool loaded;
};

#endif // ABSTRACTDATA_H
