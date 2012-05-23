namespace Sass {
  
  struct Error {
    enum Type { read, write, syntax, evaluation };
    
    Type type;
    size_t line;
    string path;
    string message;
    
    Error(Type type, string path, size_t line, string message)
    : type(type), path(path), line(line), message(message)
    { }

  };
  
}