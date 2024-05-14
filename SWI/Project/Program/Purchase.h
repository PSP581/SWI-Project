class Purchase {
private:
    bool completed;

public:
    Purchase();


    bool isCompleted() const;
    void setCompleted(bool isCompleted);

    void completePurchase();
};


