# frozen_string_literal: true

module CLI
  module Program
    module Programmable
      attr_reader :params

      def program_path
        FileUtils.mkdir(chapters_dir_path) unless Dir.exist?(chapters_dir_path)
        File.join(chapters_dir_path, "#{program_name}.c")
      end

      def bin_program_path
        File.join(Dir.pwd, 'tmp', program_name)
      end

      private

      def chapter
        params.fetch(:chapter)
      end

      def chapters_dir_path
        File.join(Dir.pwd, 'chapters', "chapter_#{chapter}")
      end

      def program_name
        params.fetch(:program_name)
      end
    end
  end
end
