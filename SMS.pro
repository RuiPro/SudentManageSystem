QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += $$files(src/*.cpp) \
    $$files(src/ui/*.cpp) \
    $$files(src/sql/*.cpp) \
    $$files(src/widget/*.cpp)

HEADERS += $$files(src/*.h) \
    $$files(src/ui/*.h) \
    $$files(src/sql/*.h) \
    $$files(src/widget/*.h)

FORMS += $$files(src/ui/*.ui)

INCLUDEPATH += $$PWD/include/mysql_windows \
               $$PWD/include/sqlite_windows \
               $$PWD/src \
               $$PWD/src/ui \
               $$PWD/src/sql \
               $$PWD/src/widget

LIBS += -L$$PWD/lib/mysql_windows \
        -L$$PWD/lib/sqlite_windows
LIBS += -llibmysql -lsqlite3

UI_DIR = $$PWD/src/ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
