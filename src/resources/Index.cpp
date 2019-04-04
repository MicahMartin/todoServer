#include "../include/resources/Index.h"

const std::shared_ptr<http_response> Index::render_GET(const http_request& req){
  return std::shared_ptr<http_response>(new string_response("Hello World"));
}

const std::shared_ptr<http_response> Index::render(const http_request& req){
  return std::shared_ptr<http_response>(new string_response("NOT IMPLEMENTED"));
}
