#pragma once

#include <cstddef>
#include <map>

#include "table.hpp"

namespace db {

class database {
  db_result insert(std::string& table_id, std::size_t id, std::string& field);
  db_result truncate(std::string& table_id);
  std::string intersect() const;
  std::string sym_diff() const;

 private:
  std::map<std::string, table> tables_;
};

}  // namespace db
