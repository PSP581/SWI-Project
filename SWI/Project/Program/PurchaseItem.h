class PurchaseItem {
private:
    bool active;

public:
    PurchaseItem();

    bool isActive() const;
    void setActive(bool isActive);
};