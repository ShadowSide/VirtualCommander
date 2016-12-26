#ifndef OPERATIONS_H
#define OPERATIONS_H
#include "Operation.h"

class CopyOpDesc: FsOpDesc
{
public:
    CopyOpDesc();
    // OperationDesc interface
public:
    std::shared_ptr<Operation> Make(const std::shared_ptr<OperationFactory> &factory);

    // FsOpDesc interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
};

class CopyOp: FsOp
{
public:
    CopyOp(const std::shared_ptr<CopyOpDesc>& desc);

    // FsOp interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
    void UnExecute(const std::shared_ptr<FsContext> &context);
};

class MoveOpDesc: FsOpDesc
{
public:
    MoveOpDesc();

    // OperationDesc interface
public:
    std::shared_ptr<Operation> Make(const std::shared_ptr<OperationFactory> &factory);

    // FsOpDesc interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
};

class MoveOp: FsOp
{
public:
    MoveOp(const std::shared_ptr<MoveOpDesc>& desc);

    // FsOp interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
    void UnExecute(const std::shared_ptr<FsContext> &context);
};

class CopyDirOpDesc: FsOpDesc
{
public:
    CopyDirOpDesc();

    // OperationDesc interface
public:
    std::shared_ptr<Operation> Make(const std::shared_ptr<OperationFactory> &factory);

    // FsOpDesc interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
};

class CopyDirOp: FsOp
{
public:
    CopyDirOp(const std::shared_ptr<CopyDirOpDesc>& desc);

    // FsOp interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
    void UnExecute(const std::shared_ptr<FsContext> &context);
};

class MoveDirOpDesc: FsOpDesc
{
public:
    MoveDirOpDesc();

    // OperationDesc interface
public:
    std::shared_ptr<Operation> Make(const std::shared_ptr<OperationFactory> &factory);

    // FsOpDesc interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
};

class MoveDirOp: FsOp
{
    MoveDirOp(const std::shared_ptr<MoveDirOpDesc>& desc);

    // FsOp interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
    void UnExecute(const std::shared_ptr<FsContext> &context);
};

class DelOpDesc: FsOpDesc
{
public:
    DelOpDesc();
    // OperationDesc interface
public:
    std::shared_ptr<Operation> Make(const std::shared_ptr<OperationFactory> &factory);

    // FsOpDesc interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
};

class DelOp: FsOp
{
public:
    DelOp(const std::shared_ptr<DelOpDesc>& desc);

    // FsOp interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
    void UnExecute(const std::shared_ptr<FsContext> &context);
};

class DelDirOpDesc: FsOpDesc
{
public:
    DelDirOpDesc();
    // OperationDesc interface
public:
    std::shared_ptr<Operation> Make(const std::shared_ptr<OperationFactory> &factory);

    // FsOpDesc interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
};

class DelDirOp: FsOp
{
public:
    DelDirOp(const std::shared_ptr<DelDirOpDesc>& desc);

    // FsOp interface
public:
    void Execute(const std::shared_ptr<FsContext> &context);
    void UnExecute(const std::shared_ptr<FsContext> &context);
};

class SequencePointDesc: OperationDesc
{
public:
    SequencePointDesc();
    // OperationDesc interface
public:
    std::shared_ptr<Operation> Make(const std::shared_ptr<OperationFactory> &factory);

    // FsOpDesc interface
public:
    void Execute(const std::shared_ptr<Context> &context);
};

class SequencePointOp: Operation
{
public:
    SequencePointOp(const std::shared_ptr<SequencePointDesc>& desc);

    // FsOp interface
public:
    void Execute(const std::shared_ptr<Context> &context);
    void UnExecute(const std::shared_ptr<Context> &context);
};

//#include "OperationFactory.h"

#endif // OPERATIONS_H
