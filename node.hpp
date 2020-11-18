#ifdef NODE_HPP
#define NODE_HPP

struct Node {
    public:

    Node& getParent() const;
    void setParent(Node const& node);

    Node& getChildren(std::string name) const;
    std::list <Node> getChildrenList() const;

    std::string getName() const;
    std::string getPath() const;
    int getDepth() const;

    glm::fmt4 getLocalTransform() const;
    void setLocalTransform(glm::fmt4 const& matrix);

    glm::fmt4 getWorldTransform() const;
    void setWorldTransform(glm::fmt4 const& matrix);

    void addChildren(Node const& node);
    Node& removeChildren(std::str node_name);

    private:

    Node* parent;
    std::list<Node> children;
    std::str name;
    std::str path;
    int depth;
    glm::fmt4 localTransform;
    glm::fmt4 worldTransform;

}

#endif
