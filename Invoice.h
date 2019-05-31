//
// Created by mateu on 5/31/2019.
//

#ifndef INVOICE_INVOICE_H
#define INVOICE_INVOICE_H

#include <string>
#include <iostream>

class Invoice {
private:
    std::string number;
    double price;
    std::string title;
    bool status;

public:
    Invoice(const std::string &number, double price, const std::string &title);

    const std::string &getNumber() const;
    void setNumber(const std::string &number);

    double getPrice() const;
    void setPrice(double price);

    const std::string &getTitle() const;
    void setTitle(const std::string &title);

    bool isStatus() const;
    void setStatus(bool status);

    friend std::ostream &operator<<(std::ostream& out, const Invoice &i);
};


#endif //INVOICE_INVOICE_H
