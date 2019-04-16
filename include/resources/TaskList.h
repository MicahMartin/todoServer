#ifndef _TaskList_h
#define _TaskList_h

#include <httpserver.hpp>
#include "../controllers/TaskListController.h" 

using namespace httpserver;

class TaskList : public httpserver::http_resource {

public:
  // return all taskLists
  const std::shared_ptr<http_response> render_GET(const http_request& req);
  // create a taskList
  const std::shared_ptr<http_response> render_POST(const http_request& req);
  // 404
  const std::shared_ptr<http_response> render(const http_request& req);

private:
  TaskListController taskListController;
};

#endif
