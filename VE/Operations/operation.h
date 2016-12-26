#ifndef OPERATION_H
#define OPERATION_H

class Context;
class FsContext;
class Operation;
class OperationFactory;

class OperationDesc: public std::enable_shared_from_this<OperationDesc>
{
public:
    OperationDesc();
    virtual void Execute(const std::shared_ptr<Context>& context) = 0;
    virtual std::shared_ptr<Operation> Make(const std::shared_ptr<OperationFactory>& factory) = 0;
    virtual ~OperationDesc();
};

class Operation: public std::enable_shared_from_this<Operation>
{
public:
    Operation(const std::shared_ptr<OperationDesc>& desc);
    virtual void Execute(const std::shared_ptr<Context>& context) = 0;
    virtual void UnExecute(const std::shared_ptr<Context>& context) = 0;
    virtual ~Operation();

private:
    std::shared_ptr<OperationDesc> _desc;
};

class FsOpDesc: public OperationDesc
{
public:
    FsOpDesc();
    virtual void Execute(const std::shared_ptr<FsContext>& context) = 0;
private:
    void Execute(const std::shared_ptr<Context>& context) override;
};

class FsOp: public Operation
{
public:
    FsOp(const std::shared_ptr<OperationDesc>& desc);
    virtual void Execute(const std::shared_ptr<FsContext>& context) = 0;
    virtual void UnExecute(const std::shared_ptr<FsContext>& context) = 0;
private:

    void Execute(const std::shared_ptr<Context>& context) override;
    void UnExecute(const std::shared_ptr<Context>& context) override;
};

#endif // OPERATION_H
