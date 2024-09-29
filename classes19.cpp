#include <iostream>

class IRenderer{
    public:
        // This is a pure virtual function
        virtual void Draw() = 0;
        virtual void Update() = 0;
        virtual void DrawOptimized() = 0;
};

class OpenGL : public IRenderer{
    public:
        void Draw() override{
            std::cout << "OpenGL::Draw\n";
        }
        void Update() override{
        }
        void DrawOptimized() override{
        }

};

class Vulkan : public IRenderer{
    public:
        void Draw() override{
            std::cout << "Vulkan::Draw\n";
        }
        void Update() override{
        }
        void DrawOptimized() override{
        }

};

int main(){

    IRenderer* myRenderer = new Vulkan;
    myRenderer ->Update();
    myRenderer ->Draw();
    myRenderer ->DrawOptimized();
    return 0;
}