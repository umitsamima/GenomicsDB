#ifndef PARSE_COMMAND_LINE_H
#define PARSE_COMMAND_LINE_H

class CommandLineOpts
{
  public:
    CommandLineOpts()
    {
      m_workspace = 0;
      m_csv_filename = 0;
      m_array_name = 0;
      m_num_samples = 0ull;
      m_position = 0ull;
    }
    char* m_workspace;
    char* m_csv_filename;
    char* m_array_name;
    uint64_t m_num_samples;
    uint64_t m_position;
};

void parse_command_line(int argc, char** argv, CommandLineOpts& cl);

#endif
