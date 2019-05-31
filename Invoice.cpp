//
// Created by mateu on 5/31/2019.
//

#include "Invoice.h"

Invoice::Invoice(const std::string &number, double price, const std::string &title): number(number), price(price), title(title), status(false) {}

const std::string &Invoice::getNumber() const {
    return number;
}

void Invoice::setNumber(const std::string &number) {
    Invoice::number = number;
}

double Invoice::getPrice() const {
    return price;
}

void Invoice::setPrice(double price) {
    Invoice::price = price;
}

const std::string &Invoice::getTitle() const {
    return title;
}

void Invoice::setTitle(const std::string &title) {
    Invoice::title = title;
}

bool Invoice::isStatus() const {
    return status;
}

void Invoice::setStatus(bool status) {
    Invoice::status = status;
}

std::ostream &operator<<(std::ostream &out, const Invoice &i){
    return out << i.getNumber() << "; " << i.getPrice() << "; " << i.getTitle() << "; " << (i.isStatus() ? "Paid" : "Not paid");
}