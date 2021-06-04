#include<iostream>
#include "GLFW/glfw3.h"
#include "configure.h"


float add(float ,float);
int main(){
    std::cout<<"Hi, baby"<<std::endl;
    std::cout<<"result of 6.2 + 145.67 ="<<add(6.2,145.67)<<std::endl;
    std::cout<<"version :"<<VERSION_MAJOR<<"."<<VERSION_MINOR<<std::endl;

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    GLFWwindow* window = glfwCreateWindow(800, 600, "lern opengl", nullptr, nullptr);
    if (window == nullptr)
    {
        printf("error world");
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        //交换帧刷新界面
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}
