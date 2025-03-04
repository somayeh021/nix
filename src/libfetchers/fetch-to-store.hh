#pragma once

#include "source-path.hh"
#include "store-api.hh"
#include "file-system.hh"
#include "repair-flag.hh"
#include "file-content-address.hh"

namespace nix {

/**
 * Copy the `path` to the Nix store.
 */
StorePath fetchToStore(
    Store & store,
    const SourcePath & path,
    std::string_view name = "source",
    ContentAddressMethod method = FileIngestionMethod::Recursive,
    PathFilter * filter = nullptr,
    RepairFlag repair = NoRepair);

}
