# frozen_string_literal: true

module CLI
  module Template
    class Create < Hanami::CLI::Command
      C_FILE_TEMPLATE = <<~C_LANG
      #include <stdio.h>
      #include <stdlib.h>

      int main() {
        
        return 0;
      }
      C_LANG

      option :chapter
      option :file_name

      def call(chapter:, file_name:)
        file_path = File.join(Dir.pwd, 'chapters', "chapter_#{chapter}", "#{file_name}.c")
        File.open(file_path, 'w') { |file| file << C_FILE_TEMPLATE }
      end
    end
  end
end
