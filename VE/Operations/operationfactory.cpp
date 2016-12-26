#include "operationfactory.h"

OperationFactory::OperationFactory()
{}

std::shared_ptr<Operation> OperationFactory::Make(const std::shared_ptr<CopyOpDesc> &desc)
{
    return std::make_shared<CopyOp>(desc);
}

std::shared_ptr<Operation> OperationFactory::Make(const std::shared_ptr<MoveOpDesc> &desc)
{
    return std::make_shared<MoveOp>(desc);
}

std::shared_ptr<Operation> OperationFactory::Make(const std::shared_ptr<CopyDirOpDesc> &desc)
{
    return std::make_shared<CopyDirOp>(desc);
}

std::shared_ptr<Operation> OperationFactory::Make(const std::shared_ptr<MoveDirOpDesc> &desc)
{
    return std::make_shared<MoveDirOp>(desc);
}

std::shared_ptr<Operation> OperationFactory::Make(const std::shared_ptr<DelOpDesc> &desc)
{
    return std::make_shared<DelOp>(desc);
}

std::shared_ptr<Operation> OperationFactory::Make(const std::shared_ptr<DelDirOpDesc> &desc)
{
    return std::make_shared<DelDirOp>(desc);
}

std::shared_ptr<Operation> OperationFactory::Make(const std::shared_ptr<SequencePointDesc> &desc)
{
    return std::make_shared<SequencePointOp>(desc);
}
