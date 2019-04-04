#ifndef _Index_h
#define _Index_h

#include <httpserver.hpp>
using namespace httpserver;

class Index : public http_resource {
public:
  const std::shared_ptr<http_response> render_GET(const http_request& req);
  const std::shared_ptr<http_response> render(const http_request& req);
};

#endif
