#ifndef JOURNAL_H
#define JOURNAL_H


class Journal
{
public:
    Journal(const std::string& journalDirectory);

    void AddOperation(std::shared_ptr<Operation> op);
private:


};

#endif // JOURNAL_H
