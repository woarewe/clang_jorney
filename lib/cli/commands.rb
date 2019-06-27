# frozen_string_literal: true

module CLI
  module Commands
    extend Hanami::CLI::Registry

    register 'create', Template::Create
  end
end
