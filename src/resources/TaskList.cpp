#include "../include/resources/TaskList.h"

const std::shared_ptr<http_response> TaskList::render_GET(const http_request& req){

  return std::shared_ptr<http_response>(new string_response("Here are all the tasks"));
};

const std::shared_ptr<http_response> TaskList::render_POST(const http_request& req){

  return std::shared_ptr<http_response>(new string_response("successfully created"));
};

const std::shared_ptr<http_response> TaskList::render(const http_request& req){

  return std::shared_ptr<http_response>(new string_response("successfully created"));
};
