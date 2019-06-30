# frozen_string_literal: true

module CLI
  module Program
    class Template < Hanami::CLI::Command
      include Programmable

      C_FILE_TEMPLATE = <<~C_LANG
      #include <stdio.h>
      #include <stdlib.h>

      int main() {
        
        return 0;
      }
      C_LANG

      option :chapter
      option :program_name

      def call(chapter:, program_name:)
        @params = { chapter: chapter, program_name: program_name }
        File.open(program_path, 'w') { |file| file << C_FILE_TEMPLATE }
      end
    end
  end
end
