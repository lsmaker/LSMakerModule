# LSMakerModule
This abstract class definition act as a unified public interface for all the LSMaker modules. This unified interface is needed to define a communication contract between the third-party LSMaker modules and the system's scheduler.

For this reason, any third-party module must inherit from LSMakerModule class and override the following
virtual methods:

**MyModule.h**
```
//Include the LSMakerModule class definition
#include "External/LSMakerModule.h"

//Implement the module class inheriting from LSMakerModule class.
class MyModule : public LSMakerModule{

  public:
    void init(void);
    void execute(void);
    void destroy(void);
    String getModuleName(void);

}
```

**MyModule.cpp**
```
#include "MyModule.h"

void MyModule::init(void){
  //Put here the code you want to be executed when the module is attached to
  //the LSMaker scheduler.
}

void MyModule::execute(void){
  //Put here the code of you want to be executed periodically. This method will
  //be called by the LSMaker scheduler automatically. The calling frequency is
  //as soon as possible by default (62.5 us more or less). However, this
  //behaviour can be modified if a period (in microseconds) is provided when //the module is attached to the LSMaker scheduler.
}

void MyModule::destroy(void){
  //Put here the code you want to be executed when the module is detached from
  //the LSMaker scheduler.
}

String MyModule::getModuleName{
  //In this case, we should return a unique string that identifies the module.
  //The module class name is often used as unique identifier but other
  //conventions can be used.
  return "MyModule";
}

```

## Author
[Albert Lloveras](https://github.com/alloveras)

## License
The MIT License (MIT)
Copyright &copy; 2016 La Salle, Universitat Ramón Llull

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

