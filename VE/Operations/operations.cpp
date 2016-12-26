#include "operations.h"

CopyOp::CopyOp(const std::shared_ptr<CopyOpDesc> &desc)
{
    throw NotImplemeted;
}

void CopyOp::Execute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

void CopyOp::UnExecute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

CopyOpDesc::CopyOpDesc()
{
    throw NotImplemeted;
}

void CopyOpDesc::Execute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

MoveOpDesc::MoveOpDesc()
{
    throw NotImplemeted;
}

void MoveOpDesc::Execute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

MoveOp::MoveOp(const std::shared_ptr<MoveOpDesc> &desc)
{
    throw NotImplemeted;
}

void MoveOp::Execute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

void MoveOp::UnExecute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

CopyDirOpDesc::CopyDirOpDesc()
{
    throw NotImplemeted;
}

std::shared_ptr<Operation> CopyDirOpDesc::Make(const std::shared_ptr<OperationFactory> &factory)
{
    return factory.Make(std::static_pointer_cast<decltype(*this)>(this->shared_from_this()));
}

void CopyDirOpDesc::Execute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

CopyDirOp::CopyDirOp(const std::shared_ptr<CopyDirOpDesc> &desc)
{
    throw NotImplemeted;
}

void CopyDirOp::Execute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

void CopyDirOp::UnExecute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

MoveDirOp::MoveDirOp(const std::shared_ptr<MoveDirOpDesc> &desc)
{
    throw NotImplemeted;
}

void MoveDirOp::Execute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

void MoveDirOp::UnExecute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

MoveDirOpDesc::MoveDirOpDesc()
{
    throw NotImplemeted;
}

std::shared_ptr<Operation> MoveDirOpDesc::Make(const std::shared_ptr<OperationFactory> &factory)
{
    return factory.Make(std::static_pointer_cast<decltype(*this)>(this->shared_from_this()));
}

void MoveDirOpDesc::Execute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

DelDirOpDesc::DelDirOpDesc()
{
    throw NotImplemeted;
}

std::shared_ptr<Operation> DelDirOpDesc::Make(const std::shared_ptr<OperationFactory> &factory)
{
    return factory.Make(std::static_pointer_cast<decltype(*this)>(this->shared_from_this()));
}

void DelDirOpDesc::Execute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

DelDirOp::DelDirOp(const std::shared_ptr<DelDirOpDesc> &desc)
{
    throw NotImplemeted;
}

void DelDirOp::Execute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

void DelDirOp::UnExecute(const std::shared_ptr<FsContext> &context)
{
    throw NotImplemeted;
}

SequencePointDesc::SequencePointDesc()
{
    throw NotImplemeted;
}

std::shared_ptr<Operation> SequencePointDesc::Make(const std::shared_ptr<OperationFactory> &factory)
{
    return factory.Make(std::static_pointer_cast<decltype(*this)>(this->shared_from_this()));
}

SequencePointOp::SequencePoint(const std::shared_ptr<SequencePointDesc> &desc)
{
    throw NotImplemeted;
}

void SequencePointOp::Execute(const std::shared_ptr<Context> &context)
{
    throw NotImplemeted;
}

void SequencePointOp::UnExecute(const std::shared_ptr<Context> &context)
{
    throw NotImplemeted;
}
