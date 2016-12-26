#ifndef OPERATIONFACTORY_H
#define OPERATIONFACTORY_H

class OperationFactory
{
public:
    OperationFactory();
    std::shared_ptr<Operation> Make(const std::shared_ptr<CopyOpDesc>& desc);
    std::shared_ptr<Operation> Make(const std::shared_ptr<MoveOpDesc>& desc);
    std::shared_ptr<Operation> Make(const std::shared_ptr<CopyDirOpDesc>& desc);
    std::shared_ptr<Operation> Make(const std::shared_ptr<MoveDirOpDesc>& desc);
    std::shared_ptr<Operation> Make(const std::shared_ptr<DelOpDesc>& desc);
    std::shared_ptr<Operation> Make(const std::shared_ptr<DelDirOpDesc>& desc);
    std::shared_ptr<Operation> Make(const std::shared_ptr<SequencePointDesc>& desc);
};

#endif // OPERATIONFACTORY_H
