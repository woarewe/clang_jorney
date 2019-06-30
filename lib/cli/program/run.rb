# frozen_string_literal: true

module CLI
  module Program
    class Run < Hanami::CLI::Command
      include Programmable

      option :chapter
      option :program_name

      def call(chapter:, program_name:)
        @params = { chapter: chapter, program_name: program_name }
        puts %x{gcc #{program_path} -Wall -pedantic -o #{bin_program_path} && #{bin_program_path}}
      end
    end
  end
end
