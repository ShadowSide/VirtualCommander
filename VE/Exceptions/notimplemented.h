#ifndef NOTIMPLEMENTED_H
#define NOTIMPLEMENTED_H


class NotImplemented : public std::logic_error
{
public:
    NotImplemented();
};

#endif // NOTIMPLEMENTED_H