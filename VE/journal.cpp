#include "journal.h"
#include <VE/Exceptions/notimplemented.h>

Journal::Journal(const std::string &journalDirectory)
{

}

void Journal::AddOperation(std::shared_ptr<Operation> op)
{
    throw NotImplemented;
}
