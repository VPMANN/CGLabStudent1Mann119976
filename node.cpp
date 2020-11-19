#include "node.hpp"

std::shared_ptr<Node> Node::getParent() const{
    return parent;
}

void Node::setParent(Node const& newparent){
    auto newparent = std::make_shared<Node>(newparen);
    parent = newparent;
}


std::shared_ptr<Node> Node::getChildren(std::string name) const{
    for (int i=0; i < children.size(); i++){
        if (children[i].getname == name){
            return children[i];
        }
    }
    return 0; 
}

std::vector<std::shared_ptr<Node>> Node::getChildrenList() const{
    return children;
}


std::string Node::getName() const{
    return name;
}

std::string Node::getPath() const{
    return path;
}

int Node::getDepth() const{
    return depth;
}


glm::fmt4 Node::getLocalTransform() const{
    return localTransform;
}

void Node::setLocalTransform(glm::fmt4 const& matrix){
    localTransform = matrix;
}


glm::fmt4 Node::getWorldTransform() const{
    return worldTransform;
}

void Node::setWorldTransform(glm::fmt4 const& matrix){
    worldTransform = matrix;
}

void Node::addChildren(Node const& newchild){
    children.pushback(newchild);
}

std::shared_ptr<Node> Node::removeChildren(std::string childname){
    for (int i = 0; i < children.size(); i++){
        if (children[i].getname()= childname){
            Node& child = children[i];
            children.erase(children.begin() + i);
            --i;
        }
    }
    return child;
}
