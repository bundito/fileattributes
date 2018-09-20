#include <QString>
#include <QStringList>
#include "fileattributes.h"

FileAttributes::FileAttributes(QString attributes) :
{
    splitAttribs(attributes);
}


void FileAttributes::splitAttribs(QString testValue) {

        bool validTest;

        QStringList attribParts = testValue.split(":");

        m_username = attribParts[0];
        m_group = attribParts[1];

        if (m_group == "") {
            m_valid = false;
        }

        int testMode = attribParts[2].toInt(&validTest);
        if (!validTest) {
            m_valid = false;
        } else {
            m_permissions = testMode;
        }
}

bool FileAttributes::isValid() {
        return m_valid;
        }

QString FileAttributes::getUsername() {
        return m_username;
    }

QString FileAttributes::getGroup() {
        return m_group;
    }

int FileAttributes::getPermissions() {
        return m_permissions;
    }


