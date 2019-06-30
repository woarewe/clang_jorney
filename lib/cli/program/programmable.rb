# frozen_string_literal: true

module CLI
  module Program
    module Programmable
      attr_reader :params

      def program_path
        File.join(Dir.pwd, 'chapters', "chapter_#{chapter}", "#{program_name}.c")
      end

      private

      def chapter
        params.fetch(:chapter)
      end

      def program_name
        params.fetch(:program_name)
      end
    end
  end
end
