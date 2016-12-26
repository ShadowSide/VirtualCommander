#include "operation.h"

OperationDesc::OperationDesc()
{

}

OperationDesc::~OperationDesc()
{

}

void OperationDesc::Execute(const std::shared_ptr<Context>& context)
{
    throw NotImplemented;
}

Operation::Operation(const std::shared_ptr<OperationDesc> &desc):
    _desc(desc)
{
    throw NotImplemented;
}

Operation::~Operation()
{

}

FsOpDesc::FsOpDesc()
{

}

void FsOpDesc::Execute(const std::shared_ptr<Context> &context)
{
    Execute(context->FsContext());
}

FsOp::FsOp(const std::shared_ptr<FsOpDesc> &desc):
    Operation(desc)
{

}

void FsOp::Execute(const std::shared_ptr<Context> &context)
{
    Execute(context->FsContext());
}

void FsOp::UnExecute(const std::shared_ptr<Context> &context)
{
    UnExecute(context->FsContext());
}
