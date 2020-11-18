#ifdef SCENE_GRAPH.HPP
#define SCENE_GRAPH.HPP
#include "node.hpp"

struct SceneGraph {
    public:

    std::string getname();
    void setname();

    Node& getroot();
    void setroot();

    private:

    std::str name;
    Node& root;
}

#endif SCENE_GRAPH.HPP
