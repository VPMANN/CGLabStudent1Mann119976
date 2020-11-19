#ifdef NODE_HPP
#define NODE_HPP

struct Node {
    public:

    st::shared_ptr<Node> getParent() const;
    void setParent(Node const& newparent);

    std::shared_ptr<Node> getChildren(std::string name) const;
    std::vector <std::shared_ptr<Node>> getChildrenList() const;

    std::string getName() const;
    std::string getPath() const;
    int getDepth() const;

    glm::fmt4 getLocalTransform() const;
    void setLocalTransform(glm::fmt4 const& matrix);

    glm::fmt4 getWorldTransform() const;
    void setWorldTransform(glm::fmt4 const& matrix);

    void addChildren(Node const& newchild);
    Node& removeChildren(std::string childname);

    private:

    std::shared_ptr<Node> parent;
    std::vector<std::shared_ptr<Node>> children; //Pointers inside vector
    std::string name;//string du otto
    std::string path;
    int depth;
    glm::fmt4 localTransform;
    glm::fmt4 worldTransform;

}

#endif
