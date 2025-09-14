include("/home/tr1ggerbtw/Projects/oop/Lab1/build/Desktop_Qt_6_9_2-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/Lab1-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "/home/tr1ggerbtw/Projects/oop/Lab1/build/Desktop_Qt_6_9_2-Debug/Lab1"
    GENERATE_QT_CONF
)
