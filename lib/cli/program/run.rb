# frozen_string_literal: true

module CLI
  module Program
    class Run < Hanami::CLI::Command
      include Programmable

      option :chapter
      option :program_name
      option :input_stream

      def call(chapter:, program_name:, input_stream: nil)
        @params = { chapter: chapter, program_name: program_name }
        output =
          if input_stream
            `gcc #{program_path} -Wall -pedantic -o #{bin_program_path} && #{bin_program_path} < #{input_stream}`
          else
            `gcc #{program_path} -Wall -pedantic -o #{bin_program_path} && #{bin_program_path}`
          end
        FileUtils.rm(bin_program_path, force: true)
        puts output
      end
    end
  end
end
