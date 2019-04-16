#include <httpserver.hpp>
#include "../include/resources/Index.h"
#include "../include/resources/TaskList.h"


int main(void){
  httpserver::webserver server = httpserver::create_webserver(8080).log_access([](const std::string& url){
    printf("%s\n", url.c_str());
  });

  Index index;
  TaskList taskList;

  server.register_resource("/", &index);
  server.register_resource("/task", &taskList);

  server.start(true);
  return 0;
}
