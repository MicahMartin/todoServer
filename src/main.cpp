#include <httpserver.hpp>

using namespace httpserver;
class TodoResource : public http_resource {
  public:
    const std::shared_ptr<http_response> render(const http_request&){
      return std::shared_ptr<http_response>(new string_response("hello world"));
    }
};

int main(int argc, char *argv[]){
  webserver server = httpserver::create_webserver(8080);
  TodoResource todoEndpoint;

  server.register_resource("/todo", &todoEndpoint);
  server.start(true);
  return 0;
}
