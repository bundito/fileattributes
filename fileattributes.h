#ifndef FILEATTRIBUTES_H
#define FILEATTRIBUTES_H

#include <QObject>
#include <QString>

class FileAttributes
{
        public:

               FileAttributes(QString atttributes);

                QString getUsername();
                QString getGroup();
                int getPermissions();
                bool isValid();

        private:

                QString m_username;
                QString m_group;
                int m_permissions;
                bool m_valid;

                void splitAttribs(QString);

};

#endif FILEATTRIBUTES_H
