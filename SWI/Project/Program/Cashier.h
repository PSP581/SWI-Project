class Cashier {
private:
    bool processing;

public:
    Cashier();

    bool isProcessing() const;
    void setProcessing(bool isProcessing);


    void processPurchase();
};


